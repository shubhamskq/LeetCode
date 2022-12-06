class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double f = celsius * 9/5 + 32;
        double k =  celsius + 273.15;
        vector<double> v;
        v.push_back(k);
        v.push_back(f);

     return v;
    }
};
