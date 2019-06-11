
def main():
    n = int(input())

    out = 0

    if n%2 == 0:
        out = 2**int(n/2)
        
    print(out)

if __name__ == "__main__":
    main()