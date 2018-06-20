class TrieNode(object):

    def __init__(self):
        self.children = [None] * 26
        self.is_end = False
    
class Trie(object):

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.root = TrieNode()
        
    @staticmethod
    def get_char_value(character):
        return ord(character) - ord('a')
        
    def insert(self, word):
        """
        Inserts a word into the trie.
        :type word: str
        :rtype: void
        """
        p_crawl = self.root
        for char in word:
            index = self.get_char_value(char)
            if not p_crawl.children[index]:
                p_crawl.children[index] = TrieNode()
            p_crawl = p_crawl.children[index]
        p_crawl.is_end = True

    def search(self, word):
        """
        Returns if the word is in the trie.
        :type word: str
        :rtype: bool
        """
        p_crawl = self.root
        for char in word:
            index = self.get_char_value(char)
            if not p_crawl.children[index]:
                return False
            p_crawl = p_crawl.children[index]
        return p_crawl.is_end

    def startsWith(self, prefix):
        """
        Returns if there is any word in the trie that starts with the given prefix.
        :type prefix: str
        :rtype: bool
        """
        p_crawl = self.root
        for char in prefix:
            index = self.get_char_value(char)
            if not p_crawl.children[index]:
                return False
            p_crawl = p_crawl.children[index]
        return True


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)