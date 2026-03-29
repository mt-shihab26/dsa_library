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
    let a = [1, 23, 13, 22, 55, 29];

    let index = linear_search(&a, 13).unwrap();

    println!("index of 13: {}", index);

    assert_eq!(index, 2);
}
