#include <stdio.h>

typedef struct {
    const char *name;
    void (*run)(void);  // function pointer taking no arguments, returning void
} State;

static void stateIdle(void) {
    printf("IDLE\n");
}

static void stateActive(void) {
    printf("ACTIVE\n");
}

int main(void) {
    State states[] = {
        {"Idle", stateIdle},
        {"Active", stateActive}
    };

    int numStates = sizeof(states) / sizeof(states[0]);

    for (int i = 0; i < numStates; i++) {
        printf("Running state: %s\n", states[i].name);
        states[i].run();
    }

    return 0;
}
