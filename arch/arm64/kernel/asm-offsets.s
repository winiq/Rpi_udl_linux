	.arch armv8-a
	.file	"asm-offsets.c"
// GNU C89 (Ubuntu 9.4.0-1ubuntu1~20.04.1) version 9.4.0 (aarch64-linux-gnu)
//	compiled by GNU C version 9.4.0, GMP version 6.2.0, MPFR version 4.0.2, MPC version 1.1.0, isl version isl-0.22.1-GMP

// GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
// options passed:  -nostdinc -I ./arch/arm64/include
// -I ./arch/arm64/include/generated -I ./include
// -I ./arch/arm64/include/uapi -I ./arch/arm64/include/generated/uapi
// -I ./include/uapi -I ./include/generated/uapi
// -imultiarch aarch64-linux-gnu -D __KERNEL__
// -D CC_USING_PATCHABLE_FUNCTION_ENTRY -D KASAN_SHADOW_SCALE_SHIFT=
// -D CONFIG_CC_HAS_K_CONSTRAINT=1 -D ARM64_ASM_ARCH="armv8.5-a"
// -D KASAN_SHADOW_SCALE_SHIFT= -D KBUILD_MODFILE="./asm-offsets"
// -D KBUILD_BASENAME="asm_offsets" -D KBUILD_MODNAME="asm_offsets"
// -D __KBUILD_MODNAME=kmod_asm_offsets
// -isystem /usr/lib/gcc-cross/aarch64-linux-gnu/9/include
// -include ./include/linux/compiler-version.h
// -include ./include/linux/kconfig.h
// -include ./include/linux/compiler_types.h
// -MMD arch/arm64/kernel/.asm-offsets.s.d arch/arm64/kernel/asm-offsets.c
// -mlittle-endian -mgeneral-regs-only -mabi=lp64
// -mbranch-protection=pac-ret+leaf
// -auxbase-strip arch/arm64/kernel/asm-offsets.s -O2 -Wall -Wundef
// -Werror=strict-prototypes -Wno-trigraphs
// -Werror=implicit-function-declaration -Werror=implicit-int
// -Werror=return-type -Wno-format-security -Wno-psabi -Wno-frame-address
// -Wformat-truncation=0 -Wformat-overflow=0 -Wno-address-of-packed-member
// -Wframe-larger-than=2048 -Wimplicit-fallthrough=5 -Wno-main
// -Wno-unused-but-set-variable -Wunused-const-variable=0
// -Wdeclaration-after-statement -Wvla -Wno-pointer-sign
// -Wno-stringop-truncation -Wno-array-bounds -Wstringop-overflow=0
// -Wno-restrict -Wno-maybe-uninitialized
// -Walloc-size-larger-than=18446744073709551615EiB -Werror=date-time
// -Werror=incompatible-pointer-types -Werror=designated-init
// -Wno-packed-not-aligned -std=gnu90 -fmacro-prefix-map=./=
// -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE
// -fno-asynchronous-unwind-tables -fno-unwind-tables
// -fno-delete-null-pointer-checks -fstack-protector-strong
// -fno-omit-frame-pointer -fno-optimize-sibling-calls
// -fno-stack-clash-protection -fpatchable-function-entry=2
// -fno-strict-overflow -fstack-check=no -fconserve-stack -fverbose-asm
// --param allow-store-data-races=0 -fstack-protector-strong
// options enabled:  -faggressive-loop-optimizations -falign-functions
// -falign-jumps -falign-labels -falign-loops -fassume-phsa -fauto-inc-dec
// -fbranch-count-reg -fcaller-saves -fcode-hoisting
// -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
// -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
// -fdevirtualize-speculatively -fdwarf2-cfi-asm -fearly-inlining
// -feliminate-unused-debug-types -fexpensive-optimizations
// -fforward-propagate -ffp-int-builtin-inexact -ffunction-cse -fgcse
// -fgcse-lm -fgnu-runtime -fgnu-unique -fguess-branch-probability
// -fhoist-adjacent-loads -fident -fif-conversion -fif-conversion2
// -findirect-inlining -finline -finline-atomics
// -finline-functions-called-once -finline-small-functions -fipa-bit-cp
// -fipa-cp -fipa-icf -fipa-icf-functions -fipa-icf-variables -fipa-profile
// -fipa-pure-const -fipa-reference -fipa-reference-addressable -fipa-sra
// -fipa-stack-alignment -fipa-vrp -fira-hoist-pressure
// -fira-share-save-slots -fira-share-spill-slots
// -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
// -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
// -fmath-errno -fmerge-constants -fmerge-debug-strings
// -fmove-loop-invariants -fomit-frame-pointer -foptimize-strlen
// -fpartial-inlining -fpeephole -fpeephole2 -fplt -fprefetch-loop-arrays
// -free -freg-struct-return -freorder-blocks -freorder-functions
// -frerun-cse-after-loop -fsched-critical-path-heuristic
// -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
// -fsched-last-insn-heuristic -fsched-pressure -fsched-rank-heuristic
// -fsched-spec -fsched-spec-insn-heuristic -fsched-stalled-insns-dep
// -fschedule-fusion -fschedule-insns -fschedule-insns2 -fsection-anchors
// -fsemantic-interposition -fshow-column -fshrink-wrap
// -fshrink-wrap-separate -fsigned-zeros -fsplit-ivs-in-unroller
// -fsplit-wide-types -fssa-backprop -fssa-phiopt -fstack-protector-strong
// -fstdarg-opt -fstore-merging -fstrict-volatile-bitfields -fsync-libcalls
// -fthread-jumps -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp
// -ftree-builtin-call-dce -ftree-ccp -ftree-ch -ftree-coalesce-vars
// -ftree-copy-prop -ftree-cselim -ftree-dce -ftree-dominator-opts
// -ftree-dse -ftree-forwprop -ftree-fre -ftree-loop-if-convert
// -ftree-loop-im -ftree-loop-ivcanon -ftree-loop-optimize
// -ftree-parallelize-loops= -ftree-phiprop -ftree-pre -ftree-pta
// -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr -ftree-sra
// -ftree-switch-conversion -ftree-tail-merge -ftree-ter -ftree-vrp
// -funit-at-a-time -fverbose-asm -fwrapv -fwrapv-pointer
// -fzero-initialized-in-bss -mfix-cortex-a53-835769
// -mfix-cortex-a53-843419 -mgeneral-regs-only -mglibc -mlittle-endian
// -momit-leaf-frame-pointer -mpc-relative-literal-loads

	.text
	.section	.text.startup,"ax",@progbits
	.align	2
	.p2align 3,,7
	.global	main
	.type	main, %function
main:
	.section	__patchable_function_entries,"aw",@progbits
	.8byte	.LPFE1
	.section	.text.startup
.LPFE1:
	nop
	nop
	hint	25 // paciasp
// arch/arm64/kernel/asm-offsets.c:29:   DEFINE(TSK_ACTIVE_MM,		offsetof(struct task_struct, active_mm));
#APP
// 29 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->TSK_ACTIVE_MM 1160 offsetof(struct task_struct, active_mm)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:30:   DEFINE(TSK_CPU,		offsetof(struct task_struct, cpu));
// 30 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->TSK_CPU 64 offsetof(struct task_struct, cpu)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:31:   BLANK();
// 31 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:32:   DEFINE(TSK_TI_FLAGS,		offsetof(struct task_struct, thread_info.flags));
// 32 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->TSK_TI_FLAGS 0 offsetof(struct task_struct, thread_info.flags)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:33:   DEFINE(TSK_TI_PREEMPT,	offsetof(struct task_struct, thread_info.preempt_count));
// 33 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->TSK_TI_PREEMPT 8 offsetof(struct task_struct, thread_info.preempt_count)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:41:   DEFINE(TSK_STACK,		offsetof(struct task_struct, stack));
// 41 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->TSK_STACK 24 offsetof(struct task_struct, stack)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:43:   DEFINE(TSK_STACK_CANARY,	offsetof(struct task_struct, stack_canary));
// 43 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->TSK_STACK_CANARY 1344 offsetof(struct task_struct, stack_canary)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:45:   BLANK();
// 45 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:46:   DEFINE(THREAD_CPU_CONTEXT,	offsetof(struct task_struct, thread.cpu_context));
// 46 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->THREAD_CPU_CONTEXT 6656 offsetof(struct task_struct, thread.cpu_context)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:47:   DEFINE(THREAD_SCTLR_USER,	offsetof(struct task_struct, thread.sctlr_user));
// 47 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->THREAD_SCTLR_USER 7728 offsetof(struct task_struct, thread.sctlr_user)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:49:   DEFINE(THREAD_KEYS_USER,	offsetof(struct task_struct, thread.keys_user));
// 49 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->THREAD_KEYS_USER 7624 offsetof(struct task_struct, thread.keys_user)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:52:   DEFINE(THREAD_KEYS_KERNEL,	offsetof(struct task_struct, thread.keys_kernel));
// 52 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->THREAD_KEYS_KERNEL 7704 offsetof(struct task_struct, thread.keys_kernel)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:55:   DEFINE(THREAD_MTE_CTRL,	offsetof(struct task_struct, thread.mte_ctrl));
// 55 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->THREAD_MTE_CTRL 7720 offsetof(struct task_struct, thread.mte_ctrl)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:57:   BLANK();
// 57 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:58:   DEFINE(S_X0,			offsetof(struct pt_regs, regs[0]));
// 58 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X0 0 offsetof(struct pt_regs, regs[0])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:59:   DEFINE(S_X2,			offsetof(struct pt_regs, regs[2]));
// 59 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X2 16 offsetof(struct pt_regs, regs[2])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:60:   DEFINE(S_X4,			offsetof(struct pt_regs, regs[4]));
// 60 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X4 32 offsetof(struct pt_regs, regs[4])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:61:   DEFINE(S_X6,			offsetof(struct pt_regs, regs[6]));
// 61 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X6 48 offsetof(struct pt_regs, regs[6])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:62:   DEFINE(S_X8,			offsetof(struct pt_regs, regs[8]));
// 62 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X8 64 offsetof(struct pt_regs, regs[8])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:63:   DEFINE(S_X10,			offsetof(struct pt_regs, regs[10]));
// 63 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X10 80 offsetof(struct pt_regs, regs[10])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:64:   DEFINE(S_X12,			offsetof(struct pt_regs, regs[12]));
// 64 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X12 96 offsetof(struct pt_regs, regs[12])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:65:   DEFINE(S_X14,			offsetof(struct pt_regs, regs[14]));
// 65 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X14 112 offsetof(struct pt_regs, regs[14])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:66:   DEFINE(S_X16,			offsetof(struct pt_regs, regs[16]));
// 66 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X16 128 offsetof(struct pt_regs, regs[16])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:67:   DEFINE(S_X18,			offsetof(struct pt_regs, regs[18]));
// 67 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X18 144 offsetof(struct pt_regs, regs[18])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:68:   DEFINE(S_X20,			offsetof(struct pt_regs, regs[20]));
// 68 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X20 160 offsetof(struct pt_regs, regs[20])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:69:   DEFINE(S_X22,			offsetof(struct pt_regs, regs[22]));
// 69 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X22 176 offsetof(struct pt_regs, regs[22])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:70:   DEFINE(S_X24,			offsetof(struct pt_regs, regs[24]));
// 70 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X24 192 offsetof(struct pt_regs, regs[24])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:71:   DEFINE(S_X26,			offsetof(struct pt_regs, regs[26]));
// 71 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X26 208 offsetof(struct pt_regs, regs[26])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:72:   DEFINE(S_X28,			offsetof(struct pt_regs, regs[28]));
// 72 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_X28 224 offsetof(struct pt_regs, regs[28])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:73:   DEFINE(S_FP,			offsetof(struct pt_regs, regs[29]));
// 73 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_FP 232 offsetof(struct pt_regs, regs[29])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:74:   DEFINE(S_LR,			offsetof(struct pt_regs, regs[30]));
// 74 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_LR 240 offsetof(struct pt_regs, regs[30])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:75:   DEFINE(S_SP,			offsetof(struct pt_regs, sp));
// 75 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_SP 248 offsetof(struct pt_regs, sp)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:76:   DEFINE(S_PSTATE,		offsetof(struct pt_regs, pstate));
// 76 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_PSTATE 264 offsetof(struct pt_regs, pstate)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:77:   DEFINE(S_PC,			offsetof(struct pt_regs, pc));
// 77 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_PC 256 offsetof(struct pt_regs, pc)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:78:   DEFINE(S_SYSCALLNO,		offsetof(struct pt_regs, syscallno));
// 78 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_SYSCALLNO 280 offsetof(struct pt_regs, syscallno)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:79:   DEFINE(S_SDEI_TTBR1,		offsetof(struct pt_regs, sdei_ttbr1));
// 79 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_SDEI_TTBR1 288 offsetof(struct pt_regs, sdei_ttbr1)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:80:   DEFINE(S_PMR_SAVE,		offsetof(struct pt_regs, pmr_save));
// 80 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_PMR_SAVE 296 offsetof(struct pt_regs, pmr_save)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:81:   DEFINE(S_STACKFRAME,		offsetof(struct pt_regs, stackframe));
// 81 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->S_STACKFRAME 304 offsetof(struct pt_regs, stackframe)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:82:   DEFINE(PT_REGS_SIZE,		sizeof(struct pt_regs));
// 82 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->PT_REGS_SIZE 336 sizeof(struct pt_regs)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:83:   BLANK();
// 83 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:85:   DEFINE(COMPAT_SIGFRAME_REGS_OFFSET,		offsetof(struct compat_sigframe, uc.uc_mcontext.arm_r0));
// 85 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->COMPAT_SIGFRAME_REGS_OFFSET 32 offsetof(struct compat_sigframe, uc.uc_mcontext.arm_r0)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:86:   DEFINE(COMPAT_RT_SIGFRAME_REGS_OFFSET,	offsetof(struct compat_rt_sigframe, sig.uc.uc_mcontext.arm_r0));
// 86 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->COMPAT_RT_SIGFRAME_REGS_OFFSET 160 offsetof(struct compat_rt_sigframe, sig.uc.uc_mcontext.arm_r0)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:87:   BLANK();
// 87 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:89:   DEFINE(MM_CONTEXT_ID,		offsetof(struct mm_struct, context.id.counter));
// 89 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->MM_CONTEXT_ID 736 offsetof(struct mm_struct, context.id.counter)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:90:   BLANK();
// 90 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:91:   DEFINE(VMA_VM_MM,		offsetof(struct vm_area_struct, vm_mm));
// 91 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_MM 64 offsetof(struct vm_area_struct, vm_mm)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:92:   DEFINE(VMA_VM_FLAGS,		offsetof(struct vm_area_struct, vm_flags));
// 92 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_FLAGS 80 offsetof(struct vm_area_struct, vm_flags)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:93:   BLANK();
// 93 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:94:   DEFINE(VM_EXEC,	       	VM_EXEC);
// 94 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->VM_EXEC 4 VM_EXEC"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:95:   BLANK();
// 95 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:96:   DEFINE(PAGE_SZ,	       	PAGE_SIZE);
// 96 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->PAGE_SZ 4096 PAGE_SIZE"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:97:   BLANK();
// 97 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:98:   DEFINE(DMA_TO_DEVICE,		DMA_TO_DEVICE);
// 98 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->DMA_TO_DEVICE 1 DMA_TO_DEVICE"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:99:   DEFINE(DMA_FROM_DEVICE,	DMA_FROM_DEVICE);
// 99 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->DMA_FROM_DEVICE 2 DMA_FROM_DEVICE"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:100:   BLANK();
// 100 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:101:   DEFINE(PREEMPT_DISABLE_OFFSET, PREEMPT_DISABLE_OFFSET);
// 101 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->PREEMPT_DISABLE_OFFSET 1 PREEMPT_DISABLE_OFFSET"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:102:   DEFINE(SOFTIRQ_SHIFT, SOFTIRQ_SHIFT);
// 102 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->SOFTIRQ_SHIFT 8 SOFTIRQ_SHIFT"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:103:   DEFINE(IRQ_CPUSTAT_SOFTIRQ_PENDING, offsetof(irq_cpustat_t, __softirq_pending));
// 103 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->IRQ_CPUSTAT_SOFTIRQ_PENDING 0 offsetof(irq_cpustat_t, __softirq_pending)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:104:   BLANK();
// 104 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:105:   DEFINE(CPU_BOOT_TASK,		offsetof(struct secondary_data, task));
// 105 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_BOOT_TASK 0 offsetof(struct secondary_data, task)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:106:   BLANK();
// 106 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:107:   DEFINE(FTR_OVR_VAL_OFFSET,	offsetof(struct arm64_ftr_override, val));
// 107 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->FTR_OVR_VAL_OFFSET 0 offsetof(struct arm64_ftr_override, val)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:108:   DEFINE(FTR_OVR_MASK_OFFSET,	offsetof(struct arm64_ftr_override, mask));
// 108 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->FTR_OVR_MASK_OFFSET 8 offsetof(struct arm64_ftr_override, mask)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:109:   BLANK();
// 109 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:111:   DEFINE(VCPU_CONTEXT,		offsetof(struct kvm_vcpu, arch.ctxt));
// 111 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->VCPU_CONTEXT 256 offsetof(struct kvm_vcpu, arch.ctxt)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:112:   DEFINE(VCPU_FAULT_DISR,	offsetof(struct kvm_vcpu, arch.fault.disr_el1));
// 112 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->VCPU_FAULT_DISR 2160 offsetof(struct kvm_vcpu, arch.fault.disr_el1)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:113:   DEFINE(VCPU_WORKAROUND_FLAGS,	offsetof(struct kvm_vcpu, arch.workaround_flags));
// 113 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->VCPU_WORKAROUND_FLAGS 2168 offsetof(struct kvm_vcpu, arch.workaround_flags)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:114:   DEFINE(VCPU_HCR_EL2,		offsetof(struct kvm_vcpu, arch.hcr_el2));
// 114 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->VCPU_HCR_EL2 2104 offsetof(struct kvm_vcpu, arch.hcr_el2)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:115:   DEFINE(CPU_USER_PT_REGS,	offsetof(struct kvm_cpu_context, regs));
// 115 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_USER_PT_REGS 0 offsetof(struct kvm_cpu_context, regs)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:116:   DEFINE(CPU_RGSR_EL1,		offsetof(struct kvm_cpu_context, sys_regs[RGSR_EL1]));
// 116 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_RGSR_EL1 1744 offsetof(struct kvm_cpu_context, sys_regs[RGSR_EL1])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:117:   DEFINE(CPU_GCR_EL1,		offsetof(struct kvm_cpu_context, sys_regs[GCR_EL1]));
// 117 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_GCR_EL1 1752 offsetof(struct kvm_cpu_context, sys_regs[GCR_EL1])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:118:   DEFINE(CPU_APIAKEYLO_EL1,	offsetof(struct kvm_cpu_context, sys_regs[APIAKEYLO_EL1]));
// 118 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_APIAKEYLO_EL1 1600 offsetof(struct kvm_cpu_context, sys_regs[APIAKEYLO_EL1])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:119:   DEFINE(CPU_APIBKEYLO_EL1,	offsetof(struct kvm_cpu_context, sys_regs[APIBKEYLO_EL1]));
// 119 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_APIBKEYLO_EL1 1616 offsetof(struct kvm_cpu_context, sys_regs[APIBKEYLO_EL1])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:120:   DEFINE(CPU_APDAKEYLO_EL1,	offsetof(struct kvm_cpu_context, sys_regs[APDAKEYLO_EL1]));
// 120 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_APDAKEYLO_EL1 1632 offsetof(struct kvm_cpu_context, sys_regs[APDAKEYLO_EL1])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:121:   DEFINE(CPU_APDBKEYLO_EL1,	offsetof(struct kvm_cpu_context, sys_regs[APDBKEYLO_EL1]));
// 121 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_APDBKEYLO_EL1 1648 offsetof(struct kvm_cpu_context, sys_regs[APDBKEYLO_EL1])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:122:   DEFINE(CPU_APGAKEYLO_EL1,	offsetof(struct kvm_cpu_context, sys_regs[APGAKEYLO_EL1]));
// 122 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_APGAKEYLO_EL1 1664 offsetof(struct kvm_cpu_context, sys_regs[APGAKEYLO_EL1])"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:123:   DEFINE(HOST_CONTEXT_VCPU,	offsetof(struct kvm_cpu_context, __hyp_running_vcpu));
// 123 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->HOST_CONTEXT_VCPU 1808 offsetof(struct kvm_cpu_context, __hyp_running_vcpu)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:124:   DEFINE(HOST_DATA_CONTEXT,	offsetof(struct kvm_host_data, host_ctxt));
// 124 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->HOST_DATA_CONTEXT 0 offsetof(struct kvm_host_data, host_ctxt)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:125:   DEFINE(NVHE_INIT_MAIR_EL2,	offsetof(struct kvm_nvhe_init_params, mair_el2));
// 125 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->NVHE_INIT_MAIR_EL2 0 offsetof(struct kvm_nvhe_init_params, mair_el2)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:126:   DEFINE(NVHE_INIT_TCR_EL2,	offsetof(struct kvm_nvhe_init_params, tcr_el2));
// 126 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->NVHE_INIT_TCR_EL2 8 offsetof(struct kvm_nvhe_init_params, tcr_el2)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:127:   DEFINE(NVHE_INIT_TPIDR_EL2,	offsetof(struct kvm_nvhe_init_params, tpidr_el2));
// 127 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->NVHE_INIT_TPIDR_EL2 16 offsetof(struct kvm_nvhe_init_params, tpidr_el2)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:128:   DEFINE(NVHE_INIT_STACK_HYP_VA,	offsetof(struct kvm_nvhe_init_params, stack_hyp_va));
// 128 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->NVHE_INIT_STACK_HYP_VA 24 offsetof(struct kvm_nvhe_init_params, stack_hyp_va)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:129:   DEFINE(NVHE_INIT_PGD_PA,	offsetof(struct kvm_nvhe_init_params, pgd_pa));
// 129 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->NVHE_INIT_PGD_PA 32 offsetof(struct kvm_nvhe_init_params, pgd_pa)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:130:   DEFINE(NVHE_INIT_HCR_EL2,	offsetof(struct kvm_nvhe_init_params, hcr_el2));
// 130 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->NVHE_INIT_HCR_EL2 40 offsetof(struct kvm_nvhe_init_params, hcr_el2)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:131:   DEFINE(NVHE_INIT_VTTBR,	offsetof(struct kvm_nvhe_init_params, vttbr));
// 131 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->NVHE_INIT_VTTBR 48 offsetof(struct kvm_nvhe_init_params, vttbr)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:132:   DEFINE(NVHE_INIT_VTCR,	offsetof(struct kvm_nvhe_init_params, vtcr));
// 132 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->NVHE_INIT_VTCR 56 offsetof(struct kvm_nvhe_init_params, vtcr)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:135:   DEFINE(CPU_CTX_SP,		offsetof(struct cpu_suspend_ctx, sp));
// 135 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->CPU_CTX_SP 104 offsetof(struct cpu_suspend_ctx, sp)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:136:   DEFINE(MPIDR_HASH_MASK,	offsetof(struct mpidr_hash, mask));
// 136 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->MPIDR_HASH_MASK 0 offsetof(struct mpidr_hash, mask)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:137:   DEFINE(MPIDR_HASH_SHIFTS,	offsetof(struct mpidr_hash, shift_aff));
// 137 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->MPIDR_HASH_SHIFTS 8 offsetof(struct mpidr_hash, shift_aff)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:138:   DEFINE(SLEEP_STACK_DATA_SYSTEM_REGS,	offsetof(struct sleep_stack_data, system_regs));
// 138 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->SLEEP_STACK_DATA_SYSTEM_REGS 0 offsetof(struct sleep_stack_data, system_regs)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:139:   DEFINE(SLEEP_STACK_DATA_CALLEE_REGS,	offsetof(struct sleep_stack_data, callee_saved_regs));
// 139 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->SLEEP_STACK_DATA_CALLEE_REGS 112 offsetof(struct sleep_stack_data, callee_saved_regs)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:141:   DEFINE(ARM_SMCCC_RES_X0_OFFS,		offsetof(struct arm_smccc_res, a0));
// 141 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_RES_X0_OFFS 0 offsetof(struct arm_smccc_res, a0)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:142:   DEFINE(ARM_SMCCC_RES_X2_OFFS,		offsetof(struct arm_smccc_res, a2));
// 142 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_RES_X2_OFFS 16 offsetof(struct arm_smccc_res, a2)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:143:   DEFINE(ARM_SMCCC_QUIRK_ID_OFFS,	offsetof(struct arm_smccc_quirk, id));
// 143 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_QUIRK_ID_OFFS 0 offsetof(struct arm_smccc_quirk, id)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:144:   DEFINE(ARM_SMCCC_QUIRK_STATE_OFFS,	offsetof(struct arm_smccc_quirk, state));
// 144 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_QUIRK_STATE_OFFS 8 offsetof(struct arm_smccc_quirk, state)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:145:   DEFINE(ARM_SMCCC_1_2_REGS_X0_OFFS,	offsetof(struct arm_smccc_1_2_regs, a0));
// 145 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X0_OFFS 0 offsetof(struct arm_smccc_1_2_regs, a0)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:146:   DEFINE(ARM_SMCCC_1_2_REGS_X2_OFFS,	offsetof(struct arm_smccc_1_2_regs, a2));
// 146 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X2_OFFS 16 offsetof(struct arm_smccc_1_2_regs, a2)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:147:   DEFINE(ARM_SMCCC_1_2_REGS_X4_OFFS,	offsetof(struct arm_smccc_1_2_regs, a4));
// 147 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X4_OFFS 32 offsetof(struct arm_smccc_1_2_regs, a4)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:148:   DEFINE(ARM_SMCCC_1_2_REGS_X6_OFFS,	offsetof(struct arm_smccc_1_2_regs, a6));
// 148 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X6_OFFS 48 offsetof(struct arm_smccc_1_2_regs, a6)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:149:   DEFINE(ARM_SMCCC_1_2_REGS_X8_OFFS,	offsetof(struct arm_smccc_1_2_regs, a8));
// 149 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X8_OFFS 64 offsetof(struct arm_smccc_1_2_regs, a8)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:150:   DEFINE(ARM_SMCCC_1_2_REGS_X10_OFFS,	offsetof(struct arm_smccc_1_2_regs, a10));
// 150 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X10_OFFS 80 offsetof(struct arm_smccc_1_2_regs, a10)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:151:   DEFINE(ARM_SMCCC_1_2_REGS_X12_OFFS,	offsetof(struct arm_smccc_1_2_regs, a12));
// 151 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X12_OFFS 96 offsetof(struct arm_smccc_1_2_regs, a12)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:152:   DEFINE(ARM_SMCCC_1_2_REGS_X14_OFFS,	offsetof(struct arm_smccc_1_2_regs, a14));
// 152 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X14_OFFS 112 offsetof(struct arm_smccc_1_2_regs, a14)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:153:   DEFINE(ARM_SMCCC_1_2_REGS_X16_OFFS,	offsetof(struct arm_smccc_1_2_regs, a16));
// 153 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_1_2_REGS_X16_OFFS 128 offsetof(struct arm_smccc_1_2_regs, a16)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:154:   BLANK();
// 154 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:155:   DEFINE(HIBERN_PBE_ORIG,	offsetof(struct pbe, orig_address));
// 155 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->HIBERN_PBE_ORIG 8 offsetof(struct pbe, orig_address)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:156:   DEFINE(HIBERN_PBE_ADDR,	offsetof(struct pbe, address));
// 156 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->HIBERN_PBE_ADDR 0 offsetof(struct pbe, address)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:157:   DEFINE(HIBERN_PBE_NEXT,	offsetof(struct pbe, next));
// 157 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->HIBERN_PBE_NEXT 16 offsetof(struct pbe, next)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:158:   DEFINE(ARM64_FTR_SYSVAL,	offsetof(struct arm64_ftr_reg, sys_val));
// 158 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->ARM64_FTR_SYSVAL 24 offsetof(struct arm64_ftr_reg, sys_val)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:159:   BLANK();
// 159 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:161:   DEFINE(TRAMP_VALIAS,		TRAMP_VALIAS);
// 161 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->TRAMP_VALIAS -4398084280320 TRAMP_VALIAS"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:168:   DEFINE(PTRAUTH_USER_KEY_APIA,		offsetof(struct ptrauth_keys_user, apia));
// 168 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->PTRAUTH_USER_KEY_APIA 0 offsetof(struct ptrauth_keys_user, apia)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:170:   DEFINE(PTRAUTH_KERNEL_KEY_APIA,	offsetof(struct ptrauth_keys_kernel, apia));
// 170 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->PTRAUTH_KERNEL_KEY_APIA 0 offsetof(struct ptrauth_keys_kernel, apia)"	//
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:172:   BLANK();
// 172 "arch/arm64/kernel/asm-offsets.c" 1
	
.ascii "->"
// 0 "" 2
// arch/arm64/kernel/asm-offsets.c:175: }
#NO_APP
	mov	w0, 0	//,
	hint	29 // autiasp
	ret	
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align	3
	.word	4
	.word	16
	.word	5
	.string	"GNU"
	.word	3221225472
	.word	4
	.word	2
	.align	3
