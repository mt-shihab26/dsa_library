const compare = (a: string, b: string) => {
    const len = a.length > b.length ? b.length : a.length;
    for (let i = 0; i < len; i++) {
        if (a[i] != b[i]) return a[i] > b[i];
    }
    return a.length > b.length;
};

const ownSort = (arr: string[], cmp: Function) => {
    const len = arr.length;
    let mn: number, i: number, j: number;
    for (i = 0; i < len; i++) {
        mn = i;
        for (j = i + 1; j < len; j++) {
            if (cmp(arr[mn], arr[j])) mn = j;
        }
        [arr[mn], arr[i]] = [arr[i], arr[mn]];
    }
    return arr;
}

const students = ["Sumit", "Saad", "Daiyan", "Akash", "Za"];
const sortedStudents = ownSort(students, compare);
console.log(students);
