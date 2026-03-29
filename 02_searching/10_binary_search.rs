fn binary_search<T>(items: &[T], target: T) -> Option<usize>
where
    T: PartialEq + PartialOrd,
{
    let mut first = 0;
    let mut last = items.len() - 1;

    // 1 3 4 5 6 <- 3
    // 1 3
    // 3

    while first <= last {
        let mid = first + ((last - first) / 2);

        if items[mid] == target {
            return Some(mid);
        }

        if items[mid] < target {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }

    None
}

fn main() {
    let items = [1, 13, 22, 23, 29, 55];

    for (index, item) in items.iter().enumerate() {
        let expected = binary_search(&items, *item).unwrap();
        assert_eq!(index, expected);
        println!("index of {item} is: {index}");
    }

    let expected = binary_search(&items, 100);
    assert_eq!(None, expected);
}
