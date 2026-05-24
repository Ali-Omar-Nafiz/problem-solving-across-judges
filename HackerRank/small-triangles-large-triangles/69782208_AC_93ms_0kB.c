void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Calculate comparative area for current triangle
            double p1 = (tr[j].a + tr[j].b + tr[j].c) / 2.0;
            double area1 = p1 * (p1 - tr[j].a) * (p1 - tr[j].b) * (p1 - tr[j].c);
            
            // Calculate comparative area for next triangle
            double p2 = (tr[j+1].a + tr[j+1].b + tr[j+1].c) / 2.0;
            double area2 = p2 * (p2 - tr[j+1].a) * (p2 - tr[j+1].b) * (p2 - tr[j+1].c);
            
            // Swap if the current triangle is larger than the next one
            if (area1 > area2) {
                triangle temp = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = temp;
            }
        }
    }
}