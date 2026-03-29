fn binary_search<T>(items: &[T], target: T) -> Option<usize>
where
    T: PartialEq,
{
    for (index, item) in items.iter().enumerate() {
        if *item == target {
            return Some(index);
        }
    }

    None
}

fn main() {
    let items = [1, 23, 13, 22, 55, 29];

    for (index, item) in items.iter().enumerate() {
        let expected = binary_search(&items, *item).unwrap();
        assert_eq!(index, expected);
        println!("index of {item} is: {index}");
    }
}
