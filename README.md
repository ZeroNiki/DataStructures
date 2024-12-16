# Data structures
## Nav
- [Stack](https://github.com/ZeroNiki/DataStructures/blob/main/src/Stack/stack_readme.md)
- [Queue](https://github.com/ZeroNiki/DataStructures/blob/main/src/Queue/queue_readme.md)
- [Linked List](https://github.com/ZeroNiki/DataStructures/blob/main/src/LinkedList/linked_list_readme.md)
- [Binary Tree](https://github.com/ZeroNiki/DataStructures/blob/main/src/BinaryTree/btree_readme.md)

## Install and build
```sh
git clone https://github.com/ZeroNiki/DataStructures.git

cd DataStructures
```

```sh
mkdir build

make
```

in `build` dir:
- `stack`
- `queue`
- `llist`
- `btree`
You can launc it (`./stack` etc.)

## Clean
clean (delete `.o` files and `build` dir):
```sh
make clean
```


## Clang-format
```sh
chmod +x cformat.sh

./cformat.sh
```
