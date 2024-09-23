#ifndef _TRIE_H_
#define _TRIE_H_

#include <iostream>
#include <string>
#include <unordered_map>

namespace tries {

class Trie {
  public:
    Trie();

    void insert(const std::string& str);
    void remove(const std::string& str);
    
    bool search(const std::string& str) const;
    void print_suggesting_words(const std::string& str) const;
    void print() const;

    ~Trie() = default;

  private:
    void remove(struct trie_node_t* root, const std::string& str);
    void print_from_node(trie_node_t* root, std::string& str) const;

  private:
    struct trie_node_t {
        bool is_end;
        std::unordered_map<char, struct trie_node_t*> edges;
    } *root_;
};

} // namespace tries

#include "../src/Trie.cpp"

#endif // _TRIE_H_