class TrieNode(object):
    def __init__(self):
        self.children = [None] * 26
        self.is_end = False

class Trie(object):
    def __init__(self):
        self.root = self.get_node()

    def get_node(self):
        return TrieNode()

    @staticmethod
    def char_value(character):
        return ord(character) - ord('a')

    def insert(self, key):
        p_crawl = self.root
        for level in range(len(key)):
            index = self.char_value(key[level])
            if not p_crawl.children[index]:
                p_crawl.children[index] = self.get_node()
            elif p_crawl.children[index].is_end or level == len(key) - 1:
                return False
            p_crawl = p_crawl.children[index]
        p_crawl.is_end = True
        return True

def no_prefix_set(queries):
    trie = Trie()
    result = True
    for key in queries:
        result &= trie.insert(key)
        if not result:
            print('\n'.join(['BAD SET', key]))
            return
    print('GOOD SET')

def main():
    queries = [input().strip() for _ in range(int(input()))]
    no_prefix_set(queries)

if __name__ == '__main__':
    main()
