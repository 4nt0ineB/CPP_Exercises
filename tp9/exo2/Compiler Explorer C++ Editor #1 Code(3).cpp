#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

std::string concat_in_caps(const std::vector<std::string>& words)
{
    auto caps = std::vector<std::string> {};
    std::transform(words.begin(), words.end(), std::back_inserter(caps), [](const std::string& a) { 
       std::string cap = "";
        return transform(a.begin(), a.end(), std::back_inserter(cap), ::toupper); 
       return cap;
    });

    return std::accumulate(caps.begin(), caps.end(), std::string(), [](const std::string& a, const std::string& b) { return a + " " + b; });
}

int main()
{
    std::vector<std::string> words { "ARRETE", "De", "criEr", "steuplAIt" };
    std::cout << concat_in_caps(words) << std::endl;
    return 0;
}

