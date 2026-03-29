fn linear_search<T>(items: &[T], target: T) -> Option<usize>
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
    let a = [1, 23, 13, 22, 55, 29];

    let index = linear_search(&a, 13).unwrap();

    println!("index of 13: {}", index);
}
