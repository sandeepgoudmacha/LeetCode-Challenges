class Solution(object):
    def countPrefixSuffixPairs(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        n=len(words)
        count=0
        for i in range(n):
            for k in words[i+1:]:
                if i!=k:
                    if k.startswith(words[i]) and k.endswith(words[i]):
                            count+=1
        return count
        