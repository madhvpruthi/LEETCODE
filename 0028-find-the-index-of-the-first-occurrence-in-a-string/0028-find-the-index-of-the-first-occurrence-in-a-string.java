class Solution {
    public int strStr(String haystack, String needle) {
        int hlen = haystack.length();
        int nlen = needle.length();

        int indx=0;
        for(int i =0; i<hlen ; i++){
            if(haystack.charAt(i) == needle.charAt(indx)){
                indx++;
            }

            else{
                i=i-indx;
                indx=0;
            }

            if(indx == nlen){
                return i-indx +1;
            }
        }
        return -1;

    }
}