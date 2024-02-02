#pragma once

#define байдужий unsigned
#define небайдужий signed
#define цілий int
#define джура short
#define козарлюга long
#define розмір size_t
#define дріб float
#define великий_дріб double

#define судження bool
#define істинна true
#define хиба false

#define казна_що void
#define Бог_тобі_суддя auto

#define я_тебе_породив new
#define я_тебе_і_вбю delete
#define породити malloc
#define породити_кількох calloc
#define породити_байстрюків alloca
#define переродити realloc
#define вбити free
#define турецький_султан nullptr

#define буква char
#define слово char*
#define кінець_слова '\0'

#define сталий const
#define змінний mutable

#define коли if
#define інакше else
#define трудись do
#define допоки while
#define круговерть for
#define піти_на goto

#define стій break
#define рушай continue
#define як_завжди default
#define підсумок return
#define не_погордуй [[nodiscard]]

#define перевірити switch
#define коли_він case

#define або_так ?
#define або_сяк :

#define зачати typedef
#define кіш struct
#define рід class
#define гурт union
#define перелік enum
#define народ typename

#define народний public
#define братський protected
#define осібний private
#define я this
#define побратим friend

#define вийти_на_герць try
#define коли_загину_від catch
#define голосити throw
#define оплакувати throw

#define межи_рядків inline
#define єдиний static
#define нерушимий constexpr

#define впровадити using
#define звичай namespace

// На честь славного кошового отамана Бублика В.В.
#define взірець template

#define заморський extern

#define похід main
#define перемога 0
#define військо_положено 1

#define Січовий std

#ifdef _WIN32

#include <Windows.h>
#define державною_будь_ласка SetConsoleOutputCP(1251)

#else

#define державною_будь_ласка

#endif
