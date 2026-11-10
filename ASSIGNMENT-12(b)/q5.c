#include <stdio.h>

typedef enum {
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
} State;

typedef enum {
    INSERT_COIN = 1,
    SELECT_ITEM,
    COMPLETE_DISPENSE,
    REFILL,
    CANCEL
} Command;

State nextState(State state, Command command, int stock)
{
    switch (state)
    {
        case IDLE:
            if (stock == 0)
                return OUT_OF_STOCK;

            if (command == INSERT_COIN)
                return COIN_INSERTED;

            printf("Invalid transition!\n");
            return IDLE;

        case COIN_INSERTED:
            if (stock == 0)
                return OUT_OF_STOCK;

            if (command == SELECT_ITEM)
                return DISPENSE;

            if (command == CANCEL)
                return IDLE;

            printf("Invalid transition!\n");
            return COIN_INSERTED;

        case DISPENSE:
            if (command == COMPLETE_DISPENSE)
            {
                if (stock <= 1)
                    return OUT_OF_STOCK;
                else
                    return IDLE;
            }

            printf("Invalid transition!\n");
            return DISPENSE;

        case OUT_OF_STOCK:
            if (command == REFILL)
                return IDLE;

            printf("Invalid transition! Machine is out of stock.\n");
            return OUT_OF_STOCK;

        default:
            return IDLE;
    }
}

void displayState(State state)
{
    switch (state)
    {
        case IDLE:
            printf("IDLE");
            break;

        case COIN_INSERTED:
            printf("COIN_INSERTED");
            break;

        case DISPENSE:
            printf("DISPENSE");
            break;

        case OUT_OF_STOCK:
            printf("OUT_OF_STOCK");
            break;
    }
}

int main()
{
    State state = IDLE;
    Command command;
    int stock = 3;
    int choice;

    while (1)
    {
        printf("\n\nCurrent State: ");
        displayState(state);

        printf("\nStock: %d\n", stock);

        printf("\n1. Insert Coin");
        printf("\n2. Select Item");
        printf("\n3. Complete Dispense");
        printf("\n4. Refill");
        printf("\n5. Cancel");
        printf("\n0. Exit");

        printf("\nEnter command: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;

        if (choice < 1 || choice > 5)
        {
            printf("Invalid command!\n");
            continue;
        }

        command = (Command)choice;

        State oldState = state;

        state = nextState(state, command, stock);
        if (oldState == DISPENSE &&
            command == COMPLETE_DISPENSE &&
            stock > 0)
        {
            stock--;
        }
        if (oldState == OUT_OF_STOCK &&
            command == REFILL)
        {
            printf("Enter new stock: ");
            scanf("%d", &stock);

            if (stock <= 0)
            {
                printf("Invalid stock quantity!\n");
                stock = 0;
                state = OUT_OF_STOCK;
            }
        }

        printf("\nState Transition: ");
        displayState(oldState);
        printf(" -> ");
        displayState(state);
        printf("\n");
    }

    printf("\nVending machine stopped.\n");

    return 0;
}
