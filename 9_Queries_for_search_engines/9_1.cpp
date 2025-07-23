#include <iostream>

int main() {
    int total_union = 780;       // Рыбак ∪ Рыбка
    int only_fisherman = 260;    // Только Рыбак
    int intersection = 50;       // Рыбак ∩ Рыбка

    // Вычисляем только "Рыбку"
    int only_mermaid = total_union - only_fisherman - intersection;

    // Выводим результаты
    std::cout << "Общее количество страниц (Рыбак ∪ Рыбка): " << total_union << std::endl;
    std::cout << "Количество страниц только с 'Рыбаком': " << only_fisherman << std::endl;
    std::cout << "Количество страниц с обоими словами: " << intersection << std::endl;
    std::cout << "Количество страниц только с 'Рыбкой': " << only_mermaid << std::endl;

    return 0;
}


