class TrieNode(object):
    def __init__(self):
        self.prefix_count = 0
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
            p_crawl.children[index].prefix_count += 1
            p_crawl = p_crawl.children[index]
        p_crawl.is_end = True

    def query(self, key):
        p_crawl = self.root
        for level in range(len(key)):
            index = self.char_value(key[level])
            if not p_crawl.children[index]:
                return 0
            p_crawl = p_crawl.children[index]
        return p_crawl.prefix_count if p_crawl is not None else 0

def contacts(queries):
    trie = Trie()
    result = []
    for task, key in queries:
        if task == 'add':
            trie.insert(key)
        else:
            result.append(trie.query(key))
    return result

def main():
    queries = [input().strip().split() for _ in range(int(input()))]
    print('\n'.join(str(result) for result in contacts(queries)))

if __name__ == '__main__':
    main()
