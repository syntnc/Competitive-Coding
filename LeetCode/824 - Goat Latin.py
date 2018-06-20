class Solution(object):
    def toGoatLatin(self, S):
        """
        :type S: str
        :rtype: str
        """
        words = S.split()
        goat_latin = []
        vowels = set(['a', 'e', 'i', 'o', 'u'])
        for index, word in enumerate(words):
            if word[0].lower() not in vowels:
                word = word[1:] + word[0]
            word += 'ma' + 'a' * (index + 1)
            goat_latin.append(word)
        return ' '.join(goat_latin)
