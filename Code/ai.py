import ollama

client=ollama.Client("182.183.2.130")

model=input("Enter Model \n1.deepseek-r1:1.5b\n2.qwen2.5-coder:1.5b \nEnter Name : ")


while True:
    prompt=input("You : ")
    if(prompt=="exit"):
        exit("Exiting")
    response=client.chat(model=model,messages = [{"role": "user", "content": prompt}],stream=True)
    print("AI  : ",end="")
    for chunk in response:
        print(chunk['message']['content'], end='',flush=True)
    print()