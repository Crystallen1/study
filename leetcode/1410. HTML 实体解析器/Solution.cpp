class Solution {
public:
    string replaceAll(string str, const string& from, const string& to) {
    size_t startPos = 0;
    while ((startPos = str.find(from, startPos)) != string::npos) {
        str.replace(startPos, from.length(), to);
        startPos += to.length(); 
    }
    return str;
}
    string entityParser(string text) {
        string result = replaceAll(text,"&quot;","\"");
        result = replaceAll(result,"&apos;","\'");
        result = replaceAll(result,"&frasl;","/");
        result = replaceAll(result,"&gt;",">");
        result = replaceAll(result,"&lt;","<");
        result = replaceAll(result,"&amp;","&");
        return result;
    }
};