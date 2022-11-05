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
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0x4f7f5e63, "nft_unregister_obj" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x6c519fff, "nft_register_obj" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "61902C020D0E916B9095BCE");
