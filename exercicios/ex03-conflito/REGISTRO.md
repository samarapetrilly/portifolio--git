# Registro de Resolução de Conflito

## 1. Arquivo e trecho que causou o conflito
- **Arquivo:** `exercicios/ex03-conflito/calculo_raiz_quadrada.cpp`

- **Trecho em conflito:** Ambas as branches alteraram a mensagem inicial,a saída do resultado final e a mensagem para reiniciar o programa. Além disso, houve pequenas diferenças nos comentários explicativos das variáveis e etapas do programa.

## 2. Como decidi qual versão manter
- Mantive a mensagem inicial, a mensagem de saída do resultado e reinicio do programa  da branch 1 para melhorar a clareza.
- Os comentários foram mesclados, priorizando os da branch 2 por estarem mais detalhados e claros.
- Essa decisão garantiu que o programa ficasse mais organizado e legível, combinando o melhor de cada branch.

## 3. Comando ou ação usada para resolver
- Resolvi o conflito manualmente no VS Code, escolhendo e mesclando o conteúdo desejado.
- Marquei o conflito como resolvido com os comandos:

git add exercicios/ex03-conflito/calculo_raiz_quadrada.cpp 
git commit -m "fix(ex03): resolve conflito de merge conflict" 