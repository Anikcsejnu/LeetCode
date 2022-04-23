class Solution {
public:
    
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    long long MOD = 1e7 + 1;
    unordered_map<string, string> urlMap;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        long long randomNumber = rand() % MOD;
        string tinyURL = convertToUniCode(randomNumber);
        
        while(urlMap.find(tinyURL) != urlMap.end()) {
            randomNumber = rand() % MOD;
            tinyURL = convertToUniCode(randomNumber);
        }
        
        urlMap[tinyURL] = longUrl;
        return tinyURL;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return urlMap[shortUrl];    
    }
    
    string convertToUniCode(int num) {
        string ans = "";
        
        while(num != 0){
            ans += characters[num % 62];
            num /= 62;
        }
        return ans;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));