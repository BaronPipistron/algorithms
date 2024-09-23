#include <iostream>

#include "./include/Trie.h"

int main() {
    tries::Trie trie;

    trie.insert("hello");
    trie.insert("hell");
    trie.insert("hehe");
    trie.insert("boom");

    std::cout << trie.search("hello") << std::endl;
    std::cout << trie.search("hell") << std::endl;
    std::cout << trie.search("hehe") << std::endl;
    std::cout << trie.search("bo") << std::endl;
    std::cout << trie.search("boom") << std::endl;
    std::cout << trie.search("bool") << std::endl;

    return 0;
}