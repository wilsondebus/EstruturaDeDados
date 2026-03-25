from clima import Clima

lista = []
nome_base = "base.csv"

mapa_preciptacao = {
    "nada": 0,
    "pouca": 1,
    "média": 2,
    "muita": 3
}
    

try: #tentar
    #abrindo o arquivo no modo leitura
    leitor = open(nome_base, "r", encoding="utf-8")

    for linha in leitor:
        ano, mes, temperatura, preciptacao = linha.strip().split(",") 

        obj_clima = Clima(ano, mes, temperatura, preciptacao) 

        if obj_clima not in lista:
            lista.append(obj_clima)
    
    leitor.close()
    
    for item in lista:
        print(item)

    maior = lista[0]

    for item in lista:
        if mapa_preciptacao[item.preciptacao] > mapa_preciptacao[maior.preciptacao]:
            maior = item

    print("Mes com maior preciptação: ")
    print(maior)

except Exception as e:
    print("Ocorreu um erro...", e)  # o e serve pra mostra onde esta o erro 