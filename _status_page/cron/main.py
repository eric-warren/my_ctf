import yaml

challenges = []

with open('challenge.yml') as f:
    data = yaml.load(f, Loader=yaml.FullLoader)
    for x, v in data.items():
        challenges.append(v)
print(challenges)

