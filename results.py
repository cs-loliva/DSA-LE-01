import pandas as pd 
import matplotlib.pyplot as plt 

df = pd.read_csv("results/results.csv")
df["ms"] = df["microseconds"] /1000.0

merge = df[df.algorithm == "merge"].sort_values("n")
bubble = df[df.algorithm == "bubble"].sort_values("n")

fig, axes = plt.subplots(1, 2, figsize=(13, 5.5))

#Linear
ax = axes[0]
ax.plot(merge.n, merge.ms, marker='o', color='', label="Merge Sort")   
ax.plot(bubble.n, bubble.ms, marker='s', color='', label="Bubble Sort")
ax.set_xlabel("Input size (n)")
ax.set_ylabel("Execution time (ms)")
ax.set_title("Execution time vs Input size (Linear scale)")
ax.legend()
ax.grid(alpha=0.3)

#Log-Log
ax2 = axes[1]
ax2.plot(merge.n, merge.ms, marker='o', color='', label="Merge Sort -- O(n log n)")   
ax2.plot(bubble.n, bubble.ms, marker='s', color='', label="Bubble Sort -- O(n\u00b2)")
ax2.set_xlabel("Input size (n, log scale)")
ax2.set_ylabel("Execution time (ms, log scale)")
ax2.set_xscale('log')
ax2.set_yscale('log')
ax2.set_title("Execution time vs Input size (log-log scale)")
ax2.legend()
ax2.grid(alpha=0.3, which="both")

plt.tight_layout()
plt.savefig("results/complexity_graph.png", dpi=300)
print("saved graph")
print(df.to_string(index=False))
