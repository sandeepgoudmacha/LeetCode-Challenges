class Solution {
    public String findLexSmallestString(String s, int a, int b) {
        String ans = s;
        int n = s.length();
        Queue<String> que = new LinkedList<>();
        HashSet<String> vis = new HashSet<>();
        que.add(s);
        vis.add(s);
        while(!que.isEmpty()) {
            String cur = que.remove();
            if(cur.compareTo(ans) < 0) ans = cur;
            String rotate = cur.substring(n-b) + cur.substring(0,n-b);
            if(!vis.contains(rotate)) {
                que.add(rotate);
                vis.add(rotate);
            }
            StringBuilder sb = new StringBuilder(cur);
            for(int i=1;i<n;i+=2) {
                char c = (char)((cur.charAt(i) - '0' + a)%10 + '0');
                sb.setCharAt(i,c);
            }
            String added = sb.toString();
            if(!vis.contains(added)) {
                que.add(added);
                vis.add(added);
            }
        }
        return ans;
    }
}