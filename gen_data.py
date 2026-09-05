import random 

random.seed(42)

sizes = {
    "small_100": 100,
    "medium_1000": 1000,
    "medium_5000": 5000,
    "medium_10000": 10000,
    "large_20000": 20000,
    "large_50000": 50000,
    "large_100000": 100000,
    "large_200000": 200000,
}

for name, n in sizes.items():
    nums = [random.randint(1,1_000_000) for _ in range(n)]
    with open(f"data/{name}.text", "w") as f:
        f.write(" ".join(map(str,nums)))

print("Datasets generated: ", list(sizes.keys()) + [sample_small_50])