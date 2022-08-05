package STANDARDDP;

import java.util.Arrays;
import java.util.Comparator;

public class RussianDoll {
    public int maxEnvelopes(int[][] envelopes) {
        if (envelopes == null || envelopes.length == 0) {
            return 0;
        }
         
        Arrays.sort(envelopes, new EnvelopesComparator());
        int[] dp = new int[envelopes.length];
        int maxLen = 1;
         
        for (int i = 0; i < envelopes.length; i++) {
            dp[i] = 1;
            for (int j = 0; j < i; j++) {
                if (envelopes[i][0] > envelopes[j][0] &&
                    envelopes[i][1] > envelopes[j][1]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                    maxLen = Math.max(maxLen, dp[i]);
                }
            }
        }
         
        return maxLen;
    }
    public static void main(String args[]) 
    {
        RussianDoll r=new RussianDoll();
        int envelopes[][]={{5,4},{6,4},{6,7},{2,3}};
        r.maxEnvelopes(envelopes);
    }
}
 
 class EnvelopesComparator implements Comparator<int[]> {
    @Override
    public int compare(int[] a, int[] b) {
        if (a[0] - b[0] != 0) {
            return a[0] - b[0];
        }
         
        return a[1] - b[1];
    }
}
