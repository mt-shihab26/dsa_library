fn internal_linear_search<T>(items: &[T], target: T, index: usize) -> Option<usize>
where
    T: PartialEq,
{
    if items[index] == target {
        return Some(index);
    }

    if index == 0 {
        return None;
    }

    internal_linear_search(items, target, index - 1)
}

fn linear_search<T>(items: &[T], target: T) -> Option<usize>
where
    T: PartialEq,
{
    internal_linear_search(items, target, items.len() - 1)
}

fn main() {
    let items = [1, 23, 13, 22, 55, 29];

    for (index, item) in items.iter().enumerate() {
        let expected = linear_search(&items, *item).unwrap();
        assert_eq!(index, expected);
        println!("index of {item} is: {index}");
    }

    let expected = linear_search(&items, 100);
    assert_eq!(None, expected);
}
