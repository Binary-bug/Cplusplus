typedef vector<string> Rule;
typedef vector<Rule> Rule_collection;
typedef map<string,Rule_collection> Grammar;




bool bracketed(const string& s){
	return s.size() > 1 && s[0]=='<' && s[s.size()-1] == '>' ;
}



void gen_aux(const Grammar& g; const string& word, vector<string>& ret){
	if(!bracketed(word))
		ret.push_back(word);
	else{
		//locate the rule that corresponds to word
		Grammar::const_iterator it = g.find(word);
		if(it == g.end())
			throw logic_error("empty rule");
		// fetch the set of possible rules
		const Rule_collection& c= it->second;

		//from which we select one at random
		const Rule& r = c[nrand(c.size())];

		//recursively expand the selected rule
		for(Rule::const_iterator i = r.begin(); i!=r.end(); ++i)
			gen_aux(g,*i,ret);
	}
}

//read a grammar from a given input stream

Grammar read_grammar(istream& in){
	Grammar ret;
	string line;

	//read the input
	while(getline(in,line)){

		//split the input into words
		vector<string> entry = split(line);
		if(!entry.empty()){
			//use the category to store the associated rule
			ret[entry[0]].push_back(Rule(entry.begin()+1,entry.end()));
		}
	}
	return ret;
}

vector<string> gen_sen(const Grammar& g){
	vector<string> ret;
	gen_aux(g,"<sentence>",ret);
	return ret;
}