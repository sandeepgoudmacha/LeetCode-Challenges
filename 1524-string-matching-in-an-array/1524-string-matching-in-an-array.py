class Solution(object):
    def stringMatching(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        res=[]
        n= len(words)
        for i, w in enumerate(words):
             for k in words[0:]:
                if w in k:
                    if w != k:
                      res.append(w)
                      break
           
        return res
        