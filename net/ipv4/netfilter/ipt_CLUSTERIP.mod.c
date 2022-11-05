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
	{ 0x2e6432e0, "seq_lseek" },
	{ 0xbd19b5, "seq_read" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x63d7d6d6, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2e6b36a6, "xt_register_target" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x2f2a1413, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x63fb00e5, "nf_register_net_hook" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbd20dd1d, "seq_release" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x4b9ffe04, "seq_open" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6756a495, "nf_unregister_net_hook" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdc0815f1, "dev_get_by_name" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8b2b24a2, "proc_mkdir" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2c2a46a, "proc_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x97936972, "dev_mc_add" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb413691c, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "CCEA5C0A894BB58B7AED36A");
