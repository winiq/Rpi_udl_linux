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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x41c86d7d, "ata_dummy_port_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe2f29a06, "ata_port_freeze" },
	{ 0xf9a482f9, "msleep" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x92dbe39a, "dev_attr_sw_activity" },
	{ 0xdc1a7218, "ata_port_printk" },
	{ 0xb41c9105, "sata_pmp_error_handler" },
	{ 0x53b1f688, "sata_link_scr_lpm" },
	{ 0xf3471e54, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcd1b9ad6, "ata_port_desc" },
	{ 0x67de296c, "dev_attr_ncq_prio_enable" },
	{ 0xf5dc79e1, "dev_attr_em_message" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xab45e1ab, "sata_pmp_port_ops" },
	{ 0x3b356fef, "ata_ehi_push_desc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x634d092d, "ata_dev_set_feature" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xab5ed0db, "ata_dev_printk" },
	{ 0x9cc4273, "ata_wait_register" },
	{ 0x7704a0a8, "acpi_storage_d3" },
	{ 0x4388756b, "ata_std_qc_defer" },
	{ 0xcf102820, "ata_host_start" },
	{ 0xd2472081, "ata_link_abort" },
	{ 0x2f219378, "dev_attr_unload_heads" },
	{ 0x406a4851, "ata_msleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0x99861dc, "ata_ehi_clear_desc" },
	{ 0x13a4aa08, "sata_link_hardreset" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x11624d34, "ata_host_activate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x4f13d131, "ata_host_register" },
	{ 0xbb0c3c31, "dev_attr_ncq_prio_supported" },
	{ 0xbffdeebf, "dev_attr_em_message_type" },
	{ 0x46ec8ea5, "sata_lpm_ignore_phy_events" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0xbfb702e, "ata_link_printk" },
	{ 0xad239479, "ata_wait_after_reset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe559e45e, "ata_qc_complete_multiple" },
	{ 0x23df5372, "ata_link_next" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xeede0552, "ata_std_postreset" },
	{ 0x1d969fec, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfdea6c67, "dev_attr_link_power_management_policy" },
	{ 0xa4ff8b07, "ata_port_abort" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x5e21127, "sata_async_notification" },
};

MODULE_INFO(depends, "libata");


MODULE_INFO(srcversion, "D5902F34F56CD0E9B29D99F");
