#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {
    int W, H, l, w, h, max_l = 0, max_w = 0, max_h = 0, max_vol = 0, max_SA = 0;
    bool invalid = true;
 
    while (invalid) {
        cout << "Input paper dimension: ";
        cin >> W >> H;
        if ((W >= 10 && W <= 3000) && (H >= 10 && H <= 3000)) {
            invalid = false;
        }
        else {
            cout << "Invalid input range." << endl;
        }
    }
 
    int max;
    if (W < H) {
        max = W;
    }
    else if (W > H) {
        max = H;
    }
    else {
        max = H - 1;
    }
 
    for (h = 1; h <= max / 2; ++h) {
        l = W - 2 * h;
        w = H - 2 * h;
        if (l == w) {
            w = l - 1;
        }
        if (l == h || w == h) {
            continue;
        }
        int vol = l * w * h;
        int surface_area = 2 * (w * h + l * h) + l * w;
        if (vol > max_vol) {
            max_vol = vol;
            max_SA = surface_area;
            max_l = l;
            max_w = w;
            max_h = h;
        }
        else if (vol == max_vol) {
            if (surface_area > max_SA) {
                max_SA = surface_area;
                max_l = l;
                max_w = w;
                max_h = h;
            }
        }
    }
    if (max_w > max_l) {
        int temp = max_l;
        max_l = max_w;
        max_w = temp;
    }
    cout << "Box dimension: " << max_l << " x " << max_w << " x " << max_h << endl;
 
    string max_vol_str = to_string(max_vol);
    for (int i = max_vol_str.size() - 3; i > 0; i -= 3) {
        max_vol_str.insert(i, ",");
    }
 
    cout << "Volume: " << max_vol_str << endl;
     
    double ratio = double(max_SA) / double(max_vol);
     
    cout << "Surface to Volume ratio: " << fixed << setprecision(3) << ratio;
 
    return 0;
}
