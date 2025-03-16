class Solution:
    def repairCars(self, ranks: List[int], cars: int) -> int:
        mini = min(ranks)
        maxi = max(ranks)
        freq=[0]*(maxi+1)
        for i in ranks:
            freq[i]+=1
        low=1
        high=mini*cars*cars
        while low<high:
            mid=(low+high)//2
            res=0
            for i in range(1,maxi+1):
                res+=freq[i]*int(math.sqrt(mid//i))
            if res>=cars:
                high = mid
            else:
                low=mid+1
        return low