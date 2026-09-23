#include <iostream>
#include <string>	
int countChar(const std::string& str, char ch)
{
    int count = 0;
    for (char c : str)//这是复制 注意内存开销
    {
        if (c == ch)
        {
            count++;
        }
    }
    return count;
}
bool containsWord(const std::string& text, const std::string& word)
{
	return text.find(word) != std::string::npos;
}
std::string getExtension(const std::string& filename)
{
	auto pos = filename.rfind('.');
	std::string extension = filename.substr(pos + 1);
	return extension;
}
int main()
{
    std::string text = "user=Leo;lang=C++;level=beginner";
	auto pos = text.find("lang=");
	std::cout << text.substr(pos + 5, 3) << std::endl;
    std::string oldLevel = "beginner";
    text.replace(text.find(oldLevel), oldLevel.size(), "intermediate");
	std::cout << text << std::endl;

    return 0;
}
