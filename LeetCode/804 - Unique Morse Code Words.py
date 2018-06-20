class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        morse = {
                    'a': ".-",
                    'b': "-...",
                    'c': "-.-.",
                    'd': "-..",
                    'e': ".",
                    'f': "..-.",
                    'g': "--.",
                    'h': "....",
                    'i': "..",
                    'j': ".---",
                    'k': "-.-",
                    'l': ".-..",
                    'm': "--",
                    'n': "-.",
                    'o': "---",
                    'p': ".--.",
                    'q': "--.-",
                    'r': ".-.",
                    's': "...",
                    't': "-",
                    'u': "..-",
                    'v': "...-",
                    'w': ".--",
                    'x': "-..-",
                    'y': "-.--",
                    'z': "--.."
        }
        transformations = set()
        for word in words:
            transformation = ''
            for char in word:
                transformation += morse[char]
            if transformation not in transformations:
                transformations.add(transformation)
        return len(transformations)
