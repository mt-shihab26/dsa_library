const linear_search = (a: number[], t: number): number => {
    const l = a.length;
    for (let i = 0; i < l; i++) {
        if (t === a[i]) {
            return i;
        }
    }
    return -1;
};

const a = [1, 23, 22, 13, 55, 29];
console.log(linear_search(a, 13));
