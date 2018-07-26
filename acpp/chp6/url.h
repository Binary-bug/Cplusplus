#ifndef GUARD_url_h
#define GUARD_url_h

#include<vector>
#include<string>


typedef std::string::const_iterator iter;

iter url_end(iter ,iter);

iter url_begin(iter,iter);

std::vector<std::string> find_urls(const std::string &);

#endif
