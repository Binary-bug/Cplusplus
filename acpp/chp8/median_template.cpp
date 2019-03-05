template<class T>  // template header, the template header tells us that we are defining a template function, and that the function will take a template parameter

T median(vector<T> v){
	typedef typename vector<T>::size_type vec_sz;
	vec_sz size = v.size();

	if(size == 0) throw domain_error("median of an empty vector");
	
	sort(v.begin(),v.end());
	
	vec_sz mid = size/2;

	return size % 2 == 0 ?(v[mid] + v[mid-1])/2 : v[mid] ;
}

/*
   Type parameters refer to types not variables, Thus whenever T appears in the function the implementation will assume that T is a type

   In the median function, we use the type parameter to explicitly to say what type of objects the vector named v holds, and to specify the return type of the function.
   
   When we call this median function, the implementation will bind T to a type that it determines at that point, during compilation.
   e.g. median of a vector<int> object called vi can be taken by calling median(vi). From this call the implementation can infer that T    int.
	In effect, the implementation instantiates our code as if we had written a specific version of median that took a vector<int>      and returned an int.

   typename is there to tell the implementation that vector<T>::size_type is the name of a type, even though the implementation doesnt     yet kow what type T represents. That is, whenever you have a type, such as vector<T>, that depends on a template parameter, that	   depends on a template parameter, and you want to use a member of that type, such as size_type, that is itself a type, you must	   precede the entire name by typename to let the implementation know to treat the name as a type.
