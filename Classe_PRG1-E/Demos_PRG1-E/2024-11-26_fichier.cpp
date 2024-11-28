//------------------------------------------------
template <int valeur>
int add_valeur(int n) {
   return n + valeur;
}

//------------------------------------------------
int put(int n) {
   cout << n;
   return n;
}

//------------------------------------------------
template <typename T, typename Fct>
void parcourir(vector<T>& v, Fct fct){
   for (size_t i=0; i< v.size(); ++i) {
      v[i] = fct(v[i]);
   }
}
