```mermaid
%%{init: {'flowchart': {'curve': 'linear'}}}%%
flowchart TD
  A[Inicio] --> B{¿Condición?}
  B -- Sí --> C[Acción positiva]
  B -- No --> D[Acción negativa]
  C --> E[Fin]
  D --> B
```