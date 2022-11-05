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
	{ 0xb219f8d9, "bio_split" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9431d5f, "mddev_suspend" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x2508d730, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9e12a6c4, "md_flush_request" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x58e19003, "disk_stack_limits" },
	{ 0xc40508c1, "bio_chain" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0xebb4769e, "blk_queue_flag_clear" },
	{ 0xb57c95c7, "blk_queue_flag_set" },
	{ 0x4a08e256, "bdevname" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xec3ade25, "md_set_array_sectors" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x258d694, "__traceiter_block_bio_remap" },
	{ 0x37a0cba, "kfree" },
	{ 0x9715ca3e, "mddev_resume" },
	{ 0x65186adf, "md_check_no_bitmap" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf52b7c86, "md_integrity_register" },
	{ 0x3e729503, "register_md_personality" },
	{ 0xa008509e, "bio_associate_blkg" },
	{ 0x2ce77fae, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "62C2C79AD3D64FE6AE936A1");
