#include <stdio.h>
#include <string.h>

struct node {
    char name[40];
    struct node *next;
};

void view(struct node *head) {
    struct node *active = head;
    while (active != NULL) {
        if (strlen(active->name) > 3 && strlen(active->name) < 6) {
            printf("name: %s\n", active->name);
        }
        active = active->next;
    }
}

int main() {
    // Baðlý liste düðümlerini oluþturma
    struct node node1, node2, node3;
    strcpy(node1.name, "ali");
    strcpy(node2.name, "cemil");
    strcpy(node3.name, "canan");
    
    
    // Düðümleri baðlama
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;
    
    // view fonksiyonunu çaðýrma
    view(&node1);
    
    return 0;
}


