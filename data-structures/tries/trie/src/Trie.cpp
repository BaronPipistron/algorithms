#include "../include/Trie.h"

using namespace tries;

Trie::Trie() : root_(new struct trie_node_t) {}

void Trie::insert(const std::string& str) {
    struct trie_node_t* root_copy = root_; 

    for (const char ch : str) {
        if (root_copy->edges.find(ch) != root_copy->edges.end()) {
            root_copy = root_copy->edges[ch];

            continue;
        }

        root_copy->edges[ch] = new struct trie_node_t;
        root_copy = root_copy->edges[ch];
    }

    root_copy->is_end = true;
}

/*
void Trie::remove(const std::string& str) {
    remove(&root_, str);
}

void Trie::remove(struct Trie::trie_node_t* root, const std::string& str) {

}
*/

bool Trie::search(const std::string& str) const {
    struct trie_node_t* root_copy = root_;

    for (const char ch : str) {
        if (root_copy->edges.find(ch) == root_copy->edges.end()) {
            return false;
        }

        root_copy = root_copy->edges[ch];
    }

    if (root_copy->is_end) {
        return true;
    }

    return false;
}

void Trie::print() const {

}

void tries::Trie::print_from_node(tries::Trie::trie_node_t* root, std::string& str) const {

}