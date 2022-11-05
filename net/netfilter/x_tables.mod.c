#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xaa38dcca, "proc_create_seq_private" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7010b9ba, "proc_set_user" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x95775e45, "make_kgid" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6587c97e, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xca55c602, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DED1280F16E54854B5A2E92");
