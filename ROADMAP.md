# Roadmap

18-month journey. Focus: systems, low-level, compilers — research and top-tier industry level.

---

## Phase 1 — Brutal Foundation `in progress`
**Months 1–4 · Start: 2026-05**

### Resources
- [ ] *The C Programming Language* — Kernighan & Ritchie (K&R)
- [ ] *Computer Systems: A Programmer's Perspective* — Bryant & O'Hallaron (CS:APP), chaps. 1–9
- [ ] *Computer Organization and Design* (RISC-V) — Patterson & Hennessy

### Weekly C projects
- [ ] simplified `malloc`
- [ ] hashmap with open addressing
- [ ] arena allocator
- [ ] generic linked list with void pointers

### Daily routine
- 30 min — LeetCode (C++)
- 2h — deep reading + book exercises
- 1.5h — C implementation (weekly project)

### Completion criteria
I can implement from scratch: a memory allocator, a hashmap, and a generic data structure with void pointers — and explain what the compiler generates for each.

---

## Phase 2 — Systems Core `queue`
**Months 5–10**

### Pillar 1 — Operating Systems
- [ ] *Operating Systems: Three Easy Pieces* (OSTEP) — free online
- [ ] Shell with pipes and redirection in C
- [ ] Thread pool from scratch
- [ ] Simple file system
- [ ] **xv6** — read every line, add a feature (new syscall or scheduler)

### Pillar 2 — Compilers
- [ ] *Crafting Interpreters* — Robert Nystrom (free online)
- [ ] Implement both interpreters (tree-walk + bytecode)
- [ ] *Engineering a Compiler* — Cooper & Torczon (parsing and IR chapters)

### Pillar 3 — Concurrency and Networking
- [ ] *The Art of Multiprocessor Programming* — Herlihy (lock-free + memory models chapters)
- [ ] Lock-free queue in C
- [ ] HTTP/1.1 server from scratch in C with concurrent connections

### Completion criteria
I have xv6 with a custom feature, a complete interpreter, and a working concurrent HTTP server.

---

## Phase 3 — Specialization and Research `queue`
**Months 11–18**

### Directions (to define when reaching Phase 2)
- [ ] Choose specialization track
- [ ] Weekly paper reading (venues: SOSP, OSDI, PLDI, ASPLOS)
- [ ] Undergraduate research (IC) or personal project at UFAL
- [ ] Anchor project — something that can't be built with a simple prompt

### Completion criteria
I have a non-trivial public project, have read and annotated 20+ papers, and can explain my specialization area with real depth.

---

## Overall Status

| Phase | Status | Period |
|---|---|---|
| Phase 1 — Brutal Foundation | in progress | May/2026 – Aug/2026 |
| Phase 2 — Systems Core | queue | Sep/2026 – Feb/2027 |
| Phase 3 — Specialization | queue | Mar/2027 – Oct/2027 |