#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = 0;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0'); // Root node with null character
    }

    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return; // base case
        }

        char ch = toupper(word[0]); // convert to uppercase
        int index = ch - 'A';       // assuming word in caps

        if (root->children[index] != NULL)
        {
            // node present
            root = root->children[index];
        }
        else
        {
            // node absent
            TrieNode *child = new TrieNode(ch);
            root->children[index] = child;
            root = child;
        }

        insertUtil(root, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            return root->isTerminal;
        }

        char ch = toupper(word[0]); // convert to uppercase
        int index = ch - 'A';

        if (root->children[index] == NULL)
        {
            return false;
        }
        else
        {
            return searchUtil(root->children[index], word.substr(1));
        }
    }

    bool search(string word)
    {
        return searchUtil(root, word);
    }
    
    void deleteUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = false; // Just unmark the end of word
            return;
        }

        char ch = toupper(word[0]);
        int index = ch - 'A';

        if (root->children[index] == NULL)
        {
            return; // Word not found, nothing to delete
        }

        deleteUtil(root->children[index], word.substr(1));
    }
    void deleteWord(string word)
    {
        deleteUtil(root, word);
    }

};

int main()
{
    Trie p;
    string word = "CAT";
    p.insertWord(word);
    string key = "CAT";
    if (p.search(key))
    {
        cout << "Yes!!";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
